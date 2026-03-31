// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEBYPACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEBYPACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceByPackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceByPackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceByPackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
    };
    GetResourceComplianceByPackRequest() = default ;
    GetResourceComplianceByPackRequest(const GetResourceComplianceByPackRequest &) = default ;
    GetResourceComplianceByPackRequest(GetResourceComplianceByPackRequest &&) = default ;
    GetResourceComplianceByPackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceByPackRequest() = default ;
    GetResourceComplianceByPackRequest& operator=(const GetResourceComplianceByPackRequest &) = default ;
    GetResourceComplianceByPackRequest& operator=(GetResourceComplianceByPackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetResourceComplianceByPackRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


  protected:
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/263332.html).
    // 
    // This parameter is required.
    shared_ptr<string> compliancePackId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
