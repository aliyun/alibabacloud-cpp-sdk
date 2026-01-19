// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWAFQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Paths, paths_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
    };
    GetWafQuotaRequest() = default ;
    GetWafQuotaRequest(const GetWafQuotaRequest &) = default ;
    GetWafQuotaRequest(GetWafQuotaRequest &&) = default ;
    GetWafQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafQuotaRequest() = default ;
    GetWafQuotaRequest& operator=(const GetWafQuotaRequest &) = default ;
    GetWafQuotaRequest& operator=(GetWafQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paths_ == nullptr; };
    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline string getPaths() const { DARABONBA_PTR_GET_DEFAULT(paths_, "") };
    inline GetWafQuotaRequest& setPaths(string paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };


  protected:
    // The path of the WAF quota, for example:
    // * managed_rules_group: represents the quota for the WAF managed rules group
    // * list: represents the quota for custom lists
    // * page: represents the quota for custom response pages
    // * scene_policy: represents the quota for scenario protection
    shared_ptr<string> paths_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
