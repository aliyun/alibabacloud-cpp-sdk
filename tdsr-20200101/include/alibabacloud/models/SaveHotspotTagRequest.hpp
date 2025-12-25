// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEHOTSPOTTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEHOTSPOTTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class SaveHotspotTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveHotspotTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParamTag, paramTag_);
      DARABONBA_PTR_TO_JSON(SubSceneUuid, subSceneUuid_);
    };
    friend void from_json(const Darabonba::Json& j, SaveHotspotTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamTag, paramTag_);
      DARABONBA_PTR_FROM_JSON(SubSceneUuid, subSceneUuid_);
    };
    SaveHotspotTagRequest() = default ;
    SaveHotspotTagRequest(const SaveHotspotTagRequest &) = default ;
    SaveHotspotTagRequest(SaveHotspotTagRequest &&) = default ;
    SaveHotspotTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveHotspotTagRequest() = default ;
    SaveHotspotTagRequest& operator=(const SaveHotspotTagRequest &) = default ;
    SaveHotspotTagRequest& operator=(SaveHotspotTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramTag_ == nullptr
        && return this->subSceneUuid_ == nullptr; };
    // paramTag Field Functions 
    bool hasParamTag() const { return this->paramTag_ != nullptr;};
    void deleteParamTag() { this->paramTag_ = nullptr;};
    inline string paramTag() const { DARABONBA_PTR_GET_DEFAULT(paramTag_, "") };
    inline SaveHotspotTagRequest& setParamTag(string paramTag) { DARABONBA_PTR_SET_VALUE(paramTag_, paramTag) };


    // subSceneUuid Field Functions 
    bool hasSubSceneUuid() const { return this->subSceneUuid_ != nullptr;};
    void deleteSubSceneUuid() { this->subSceneUuid_ = nullptr;};
    inline string subSceneUuid() const { DARABONBA_PTR_GET_DEFAULT(subSceneUuid_, "") };
    inline SaveHotspotTagRequest& setSubSceneUuid(string subSceneUuid) { DARABONBA_PTR_SET_VALUE(subSceneUuid_, subSceneUuid) };


  protected:
    std::shared_ptr<string> paramTag_ = nullptr;
    std::shared_ptr<string> subSceneUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
