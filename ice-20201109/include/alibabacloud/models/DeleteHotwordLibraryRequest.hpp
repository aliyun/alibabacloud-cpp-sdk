// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHOTWORDLIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHOTWORDLIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteHotwordLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHotwordLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotwordLibraryId, hotwordLibraryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHotwordLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotwordLibraryId, hotwordLibraryId_);
    };
    DeleteHotwordLibraryRequest() = default ;
    DeleteHotwordLibraryRequest(const DeleteHotwordLibraryRequest &) = default ;
    DeleteHotwordLibraryRequest(DeleteHotwordLibraryRequest &&) = default ;
    DeleteHotwordLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHotwordLibraryRequest() = default ;
    DeleteHotwordLibraryRequest& operator=(const DeleteHotwordLibraryRequest &) = default ;
    DeleteHotwordLibraryRequest& operator=(DeleteHotwordLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotwordLibraryId_ == nullptr; };
    // hotwordLibraryId Field Functions 
    bool hasHotwordLibraryId() const { return this->hotwordLibraryId_ != nullptr;};
    void deleteHotwordLibraryId() { this->hotwordLibraryId_ = nullptr;};
    inline string hotwordLibraryId() const { DARABONBA_PTR_GET_DEFAULT(hotwordLibraryId_, "") };
    inline DeleteHotwordLibraryRequest& setHotwordLibraryId(string hotwordLibraryId) { DARABONBA_PTR_SET_VALUE(hotwordLibraryId_, hotwordLibraryId) };


  protected:
    // The ID of the hotword library that you want to delete.
    std::shared_ptr<string> hotwordLibraryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
