// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class StopInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SaveImage, saveImage_);
    };
    friend void from_json(const Darabonba::Json& j, StopInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SaveImage, saveImage_);
    };
    StopInstanceRequest() = default ;
    StopInstanceRequest(const StopInstanceRequest &) = default ;
    StopInstanceRequest(StopInstanceRequest &&) = default ;
    StopInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInstanceRequest() = default ;
    StopInstanceRequest& operator=(const StopInstanceRequest &) = default ;
    StopInstanceRequest& operator=(StopInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->saveImage_ == nullptr; };
    // saveImage Field Functions 
    bool hasSaveImage() const { return this->saveImage_ != nullptr;};
    void deleteSaveImage() { this->saveImage_ = nullptr;};
    inline bool getSaveImage() const { DARABONBA_PTR_GET_DEFAULT(saveImage_, false) };
    inline StopInstanceRequest& setSaveImage(bool saveImage) { DARABONBA_PTR_SET_VALUE(saveImage_, saveImage) };


  protected:
    shared_ptr<bool> saveImage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
