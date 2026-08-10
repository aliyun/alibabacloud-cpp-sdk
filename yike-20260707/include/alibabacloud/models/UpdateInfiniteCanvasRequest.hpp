// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINFINITECANVASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINFINITECANVASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class UpdateInfiniteCanvasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInfiniteCanvasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CanvasId, canvasId_);
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInfiniteCanvasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CanvasId, canvasId_);
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateInfiniteCanvasRequest() = default ;
    UpdateInfiniteCanvasRequest(const UpdateInfiniteCanvasRequest &) = default ;
    UpdateInfiniteCanvasRequest(UpdateInfiniteCanvasRequest &&) = default ;
    UpdateInfiniteCanvasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInfiniteCanvasRequest() = default ;
    UpdateInfiniteCanvasRequest& operator=(const UpdateInfiniteCanvasRequest &) = default ;
    UpdateInfiniteCanvasRequest& operator=(UpdateInfiniteCanvasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canvasId_ == nullptr
        && this->coverUrl_ == nullptr && this->title_ == nullptr; };
    // canvasId Field Functions 
    bool hasCanvasId() const { return this->canvasId_ != nullptr;};
    void deleteCanvasId() { this->canvasId_ = nullptr;};
    inline string getCanvasId() const { DARABONBA_PTR_GET_DEFAULT(canvasId_, "") };
    inline UpdateInfiniteCanvasRequest& setCanvasId(string canvasId) { DARABONBA_PTR_SET_VALUE(canvasId_, canvasId) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline UpdateInfiniteCanvasRequest& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateInfiniteCanvasRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the infinite canvas.
    // 
    // This parameter is required.
    shared_ptr<string> canvasId_ {};
    // The cover URL.
    shared_ptr<string> coverUrl_ {};
    // The project title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
