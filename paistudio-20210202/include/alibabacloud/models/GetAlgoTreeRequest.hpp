// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALGOTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALGOTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetAlgoTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlgoTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlgoTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    GetAlgoTreeRequest() = default ;
    GetAlgoTreeRequest(const GetAlgoTreeRequest &) = default ;
    GetAlgoTreeRequest(GetAlgoTreeRequest &&) = default ;
    GetAlgoTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlgoTreeRequest() = default ;
    GetAlgoTreeRequest& operator=(const GetAlgoTreeRequest &) = default ;
    GetAlgoTreeRequest& operator=(GetAlgoTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAlgoTreeRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
