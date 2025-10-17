// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATERESPONSEBODYLAUNCHTEMPLATEVERSIONNUMBERS_HPP_
#define ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATERESPONSEBODYLAUNCHTEMPLATEVERSIONNUMBERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers& obj) { 
      DARABONBA_PTR_TO_JSON(versionNumbers, versionNumbers_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers& obj) { 
      DARABONBA_PTR_FROM_JSON(versionNumbers, versionNumbers_);
    };
    DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers() = default ;
    DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers(const DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers &) = default ;
    DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers(DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers &&) = default ;
    DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers() = default ;
    DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers& operator=(const DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers &) = default ;
    DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers& operator=(DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->versionNumbers_ == nullptr; };
    // versionNumbers Field Functions 
    bool hasVersionNumbers() const { return this->versionNumbers_ != nullptr;};
    void deleteVersionNumbers() { this->versionNumbers_ = nullptr;};
    inline const vector<int64_t> & versionNumbers() const { DARABONBA_PTR_GET_CONST(versionNumbers_, vector<int64_t>) };
    inline vector<int64_t> versionNumbers() { DARABONBA_PTR_GET(versionNumbers_, vector<int64_t>) };
    inline DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers& setVersionNumbers(const vector<int64_t> & versionNumbers) { DARABONBA_PTR_SET_VALUE(versionNumbers_, versionNumbers) };
    inline DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers& setVersionNumbers(vector<int64_t> && versionNumbers) { DARABONBA_PTR_SET_RVALUE(versionNumbers_, versionNumbers) };


  protected:
    std::shared_ptr<vector<int64_t>> versionNumbers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
