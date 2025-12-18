// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCompliancePackRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetCompliancePackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompliancePackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompliancePackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetCompliancePackRequest() = default ;
    GetCompliancePackRequest(const GetCompliancePackRequest &) = default ;
    GetCompliancePackRequest(GetCompliancePackRequest &&) = default ;
    GetCompliancePackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompliancePackRequest() = default ;
    GetCompliancePackRequest& operator=(const GetCompliancePackRequest &) = default ;
    GetCompliancePackRequest& operator=(GetCompliancePackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && return this->tag_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetCompliancePackRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetCompliancePackRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetCompliancePackRequestTag>) };
    inline vector<GetCompliancePackRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<GetCompliancePackRequestTag>) };
    inline GetCompliancePackRequest& setTag(const vector<GetCompliancePackRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetCompliancePackRequest& setTag(vector<GetCompliancePackRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/263332.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    std::shared_ptr<vector<GetCompliancePackRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
