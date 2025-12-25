// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINLAYOUTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINLAYOUTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetOriginLayoutDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginLayoutDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SubSceneId, subSceneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginLayoutDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SubSceneId, subSceneId_);
    };
    GetOriginLayoutDataRequest() = default ;
    GetOriginLayoutDataRequest(const GetOriginLayoutDataRequest &) = default ;
    GetOriginLayoutDataRequest(GetOriginLayoutDataRequest &&) = default ;
    GetOriginLayoutDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginLayoutDataRequest() = default ;
    GetOriginLayoutDataRequest& operator=(const GetOriginLayoutDataRequest &) = default ;
    GetOriginLayoutDataRequest& operator=(GetOriginLayoutDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subSceneId_ == nullptr; };
    // subSceneId Field Functions 
    bool hasSubSceneId() const { return this->subSceneId_ != nullptr;};
    void deleteSubSceneId() { this->subSceneId_ = nullptr;};
    inline string subSceneId() const { DARABONBA_PTR_GET_DEFAULT(subSceneId_, "") };
    inline GetOriginLayoutDataRequest& setSubSceneId(string subSceneId) { DARABONBA_PTR_SET_VALUE(subSceneId_, subSceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> subSceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
