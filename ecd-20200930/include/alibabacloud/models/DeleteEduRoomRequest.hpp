// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDUROOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDUROOMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteEduRoomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEduRoomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EduRoomId, eduRoomId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEduRoomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EduRoomId, eduRoomId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteEduRoomRequest() = default ;
    DeleteEduRoomRequest(const DeleteEduRoomRequest &) = default ;
    DeleteEduRoomRequest(DeleteEduRoomRequest &&) = default ;
    DeleteEduRoomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEduRoomRequest() = default ;
    DeleteEduRoomRequest& operator=(const DeleteEduRoomRequest &) = default ;
    DeleteEduRoomRequest& operator=(DeleteEduRoomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eduRoomId_ != nullptr
        && this->regionId_ != nullptr; };
    // eduRoomId Field Functions 
    bool hasEduRoomId() const { return this->eduRoomId_ != nullptr;};
    void deleteEduRoomId() { this->eduRoomId_ = nullptr;};
    inline string eduRoomId() const { DARABONBA_PTR_GET_DEFAULT(eduRoomId_, "") };
    inline DeleteEduRoomRequest& setEduRoomId(string eduRoomId) { DARABONBA_PTR_SET_VALUE(eduRoomId_, eduRoomId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteEduRoomRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eduRoomId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
