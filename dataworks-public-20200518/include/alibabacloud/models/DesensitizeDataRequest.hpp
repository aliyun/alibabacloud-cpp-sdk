// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESENSITIZEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESENSITIZEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DesensitizeDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DesensitizeDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, DesensitizeDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
    };
    DesensitizeDataRequest() = default ;
    DesensitizeDataRequest(const DesensitizeDataRequest &) = default ;
    DesensitizeDataRequest(DesensitizeDataRequest &&) = default ;
    DesensitizeDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DesensitizeDataRequest() = default ;
    DesensitizeDataRequest& operator=(const DesensitizeDataRequest &) = default ;
    DesensitizeDataRequest& operator=(DesensitizeDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->sceneCode_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DesensitizeDataRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DesensitizeDataRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // The data that you want to mask.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The code of the data masking scenario. You can view the code on the Data Masking Management page in Data Security Guard of the DataWorks console.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
