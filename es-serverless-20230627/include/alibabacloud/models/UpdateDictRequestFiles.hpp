// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDICTREQUESTFILES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDICTREQUESTFILES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDictRequestFilesOssObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateDictRequestFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDictRequestFiles& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ossObject, ossObject_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDictRequestFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ossObject, ossObject_);
    };
    UpdateDictRequestFiles() = default ;
    UpdateDictRequestFiles(const UpdateDictRequestFiles &) = default ;
    UpdateDictRequestFiles(UpdateDictRequestFiles &&) = default ;
    UpdateDictRequestFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDictRequestFiles() = default ;
    UpdateDictRequestFiles& operator=(const UpdateDictRequestFiles &) = default ;
    UpdateDictRequestFiles& operator=(UpdateDictRequestFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->ossObject_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDictRequestFiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossObject Field Functions 
    bool hasOssObject() const { return this->ossObject_ != nullptr;};
    void deleteOssObject() { this->ossObject_ = nullptr;};
    inline const Models::UpdateDictRequestFilesOssObject & ossObject() const { DARABONBA_PTR_GET_CONST(ossObject_, Models::UpdateDictRequestFilesOssObject) };
    inline Models::UpdateDictRequestFilesOssObject ossObject() { DARABONBA_PTR_GET(ossObject_, Models::UpdateDictRequestFilesOssObject) };
    inline UpdateDictRequestFiles& setOssObject(const Models::UpdateDictRequestFilesOssObject & ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };
    inline UpdateDictRequestFiles& setOssObject(Models::UpdateDictRequestFilesOssObject && ossObject) { DARABONBA_PTR_SET_RVALUE(ossObject_, ossObject) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::UpdateDictRequestFilesOssObject> ossObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
