// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTDBRESPONSEBODYFPSHOTDBLISTFPSHOTDB_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTDBRESPONSEBODYFPSHOTDBLISTFPSHOTDB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotDBResponseBodyFpShotDBListFpShotDB : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotDBResponseBodyFpShotDBListFpShotDB& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotDBResponseBodyFpShotDBListFpShotDB& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListFpShotDBResponseBodyFpShotDBListFpShotDB() = default ;
    ListFpShotDBResponseBodyFpShotDBListFpShotDB(const ListFpShotDBResponseBodyFpShotDBListFpShotDB &) = default ;
    ListFpShotDBResponseBodyFpShotDBListFpShotDB(ListFpShotDBResponseBodyFpShotDBListFpShotDB &&) = default ;
    ListFpShotDBResponseBodyFpShotDBListFpShotDB(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotDBResponseBodyFpShotDBListFpShotDB() = default ;
    ListFpShotDBResponseBodyFpShotDBListFpShotDB& operator=(const ListFpShotDBResponseBodyFpShotDBListFpShotDB &) = default ;
    ListFpShotDBResponseBodyFpShotDBListFpShotDB& operator=(ListFpShotDBResponseBodyFpShotDBListFpShotDB &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fpDBId_ == nullptr && return this->modelId_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFpShotDBResponseBodyFpShotDBListFpShotDB& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fpDBId Field Functions 
    bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
    void deleteFpDBId() { this->fpDBId_ = nullptr;};
    inline string fpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
    inline ListFpShotDBResponseBodyFpShotDBListFpShotDB& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int32_t modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0) };
    inline ListFpShotDBResponseBodyFpShotDBListFpShotDB& setModelId(int32_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFpShotDBResponseBodyFpShotDBListFpShotDB& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFpShotDBResponseBodyFpShotDBListFpShotDB& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the media fingerprint library.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the media fingerprint library.
    std::shared_ptr<string> fpDBId_ = nullptr;
    // The model ID of the media fingerprint library. A value of **11** indicates that the library is a text fingerprint library. A value of **12** indicates that the library is a video fingerprint library. A value of **13** indicates that the library is an audio fingerprint library. A value of **14** indicates that the library is an image fingerprint library.
    std::shared_ptr<int32_t> modelId_ = nullptr;
    // The name of the media fingerprint library.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the media fingerprint library. Default value: **offline**. ****Valid values:
    // 
    // *   **offline**: The media fingerprint library is offline.
    // *   **active**: The media fingerprint library is online.
    // *   **paused**: The media fingerprint library is paused.
    // *   **deleted**: The media fingerprint library is deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
