// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYECCINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYECCINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryEccInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEccInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EccId, eccId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEccInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EccId, eccId_);
    };
    QueryEccInfoRequest() = default ;
    QueryEccInfoRequest(const QueryEccInfoRequest &) = default ;
    QueryEccInfoRequest(QueryEccInfoRequest &&) = default ;
    QueryEccInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEccInfoRequest() = default ;
    QueryEccInfoRequest& operator=(const QueryEccInfoRequest &) = default ;
    QueryEccInfoRequest& operator=(QueryEccInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eccId_ == nullptr; };
    // eccId Field Functions 
    bool hasEccId() const { return this->eccId_ != nullptr;};
    void deleteEccId() { this->eccId_ = nullptr;};
    inline string eccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
    inline QueryEccInfoRequest& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


  protected:
    // The ID of the ECC.
    // 
    // This parameter is required.
    std::shared_ptr<string> eccId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
