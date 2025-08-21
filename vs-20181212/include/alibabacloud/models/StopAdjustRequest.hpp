// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPADJUSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPADJUSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StopAdjustRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopAdjustRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Focus, focus_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Iris, iris_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, StopAdjustRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Focus, focus_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Iris, iris_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    StopAdjustRequest() = default ;
    StopAdjustRequest(const StopAdjustRequest &) = default ;
    StopAdjustRequest(StopAdjustRequest &&) = default ;
    StopAdjustRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopAdjustRequest() = default ;
    StopAdjustRequest& operator=(const StopAdjustRequest &) = default ;
    StopAdjustRequest& operator=(StopAdjustRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->focus_ != nullptr
        && this->id_ != nullptr && this->iris_ != nullptr && this->ownerId_ != nullptr; };
    // focus Field Functions 
    bool hasFocus() const { return this->focus_ != nullptr;};
    void deleteFocus() { this->focus_ = nullptr;};
    inline bool focus() const { DARABONBA_PTR_GET_DEFAULT(focus_, false) };
    inline StopAdjustRequest& setFocus(bool focus) { DARABONBA_PTR_SET_VALUE(focus_, focus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline StopAdjustRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // iris Field Functions 
    bool hasIris() const { return this->iris_ != nullptr;};
    void deleteIris() { this->iris_ = nullptr;};
    inline bool iris() const { DARABONBA_PTR_GET_DEFAULT(iris_, false) };
    inline StopAdjustRequest& setIris(bool iris) { DARABONBA_PTR_SET_VALUE(iris_, iris) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StopAdjustRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    std::shared_ptr<bool> focus_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> iris_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
