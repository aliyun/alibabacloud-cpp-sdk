// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRCSSIGNMENUBYVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRCSSIGNMENUBYVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryRcsSignMenuByVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRcsSignMenuByVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RcsMenuVersion, rcsMenuVersion_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRcsSignMenuByVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RcsMenuVersion, rcsMenuVersion_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
    };
    QueryRcsSignMenuByVersionRequest() = default ;
    QueryRcsSignMenuByVersionRequest(const QueryRcsSignMenuByVersionRequest &) = default ;
    QueryRcsSignMenuByVersionRequest(QueryRcsSignMenuByVersionRequest &&) = default ;
    QueryRcsSignMenuByVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRcsSignMenuByVersionRequest() = default ;
    QueryRcsSignMenuByVersionRequest& operator=(const QueryRcsSignMenuByVersionRequest &) = default ;
    QueryRcsSignMenuByVersionRequest& operator=(QueryRcsSignMenuByVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rcsMenuVersion_ == nullptr
        && this->signName_ == nullptr; };
    // rcsMenuVersion Field Functions 
    bool hasRcsMenuVersion() const { return this->rcsMenuVersion_ != nullptr;};
    void deleteRcsMenuVersion() { this->rcsMenuVersion_ = nullptr;};
    inline string getRcsMenuVersion() const { DARABONBA_PTR_GET_DEFAULT(rcsMenuVersion_, "") };
    inline QueryRcsSignMenuByVersionRequest& setRcsMenuVersion(string rcsMenuVersion) { DARABONBA_PTR_SET_VALUE(rcsMenuVersion_, rcsMenuVersion) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QueryRcsSignMenuByVersionRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


  protected:
    // This parameter is required.
    shared_ptr<string> rcsMenuVersion_ {};
    // This parameter is required.
    shared_ptr<string> signName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
