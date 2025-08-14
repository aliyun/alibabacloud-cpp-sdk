// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTCOMPARERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTCOMPARERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class GetDocumentCompareResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentCompareResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentCompareResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetDocumentCompareResultRequest() = default ;
    GetDocumentCompareResultRequest(const GetDocumentCompareResultRequest &) = default ;
    GetDocumentCompareResultRequest(GetDocumentCompareResultRequest &&) = default ;
    GetDocumentCompareResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentCompareResultRequest() = default ;
    GetDocumentCompareResultRequest& operator=(const GetDocumentCompareResultRequest &) = default ;
    GetDocumentCompareResultRequest& operator=(GetDocumentCompareResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDocumentCompareResultRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
