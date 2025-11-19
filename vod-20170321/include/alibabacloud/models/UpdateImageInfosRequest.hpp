// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateImageInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateContent, updateContent_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateContent, updateContent_);
    };
    UpdateImageInfosRequest() = default ;
    UpdateImageInfosRequest(const UpdateImageInfosRequest &) = default ;
    UpdateImageInfosRequest(UpdateImageInfosRequest &&) = default ;
    UpdateImageInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageInfosRequest() = default ;
    UpdateImageInfosRequest& operator=(const UpdateImageInfosRequest &) = default ;
    UpdateImageInfosRequest& operator=(UpdateImageInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->updateContent_ == nullptr; };
    // updateContent Field Functions 
    bool hasUpdateContent() const { return this->updateContent_ != nullptr;};
    void deleteUpdateContent() { this->updateContent_ = nullptr;};
    inline string updateContent() const { DARABONBA_PTR_GET_DEFAULT(updateContent_, "") };
    inline UpdateImageInfosRequest& setUpdateContent(string updateContent) { DARABONBA_PTR_SET_VALUE(updateContent_, updateContent) };


  protected:
    // The new information about the one or more images. You can modify the information about up to 20 images at a time. For more information about the parameter structure, see the **UpdateContent** section.
    // 
    // >  The values of the nested parameters Title, Description, and Tags under the UpdateContent parameter cannot contain emoticons.
    // 
    // This parameter is required.
    std::shared_ptr<string> updateContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
