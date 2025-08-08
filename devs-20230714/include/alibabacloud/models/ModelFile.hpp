// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELFILE_HPP_
#define ALIBABACLOUD_MODELS_MODELFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelFile& obj) { 
      DARABONBA_PTR_TO_JSON(isDir, isDir_);
      DARABONBA_PTR_TO_JSON(modeTime, modeTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ModelFile& obj) { 
      DARABONBA_PTR_FROM_JSON(isDir, isDir_);
      DARABONBA_PTR_FROM_JSON(modeTime, modeTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ModelFile() = default ;
    ModelFile(const ModelFile &) = default ;
    ModelFile(ModelFile &&) = default ;
    ModelFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelFile() = default ;
    ModelFile& operator=(const ModelFile &) = default ;
    ModelFile& operator=(ModelFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDir_ != nullptr
        && this->modeTime_ != nullptr && this->name_ != nullptr && this->path_ != nullptr && this->size_ != nullptr; };
    // isDir Field Functions 
    bool hasIsDir() const { return this->isDir_ != nullptr;};
    void deleteIsDir() { this->isDir_ = nullptr;};
    inline bool isDir() const { DARABONBA_PTR_GET_DEFAULT(isDir_, false) };
    inline ModelFile& setIsDir(bool isDir) { DARABONBA_PTR_SET_VALUE(isDir_, isDir) };


    // modeTime Field Functions 
    bool hasModeTime() const { return this->modeTime_ != nullptr;};
    void deleteModeTime() { this->modeTime_ = nullptr;};
    inline int64_t modeTime() const { DARABONBA_PTR_GET_DEFAULT(modeTime_, 0L) };
    inline ModelFile& setModeTime(int64_t modeTime) { DARABONBA_PTR_SET_VALUE(modeTime_, modeTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelFile& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModelFile& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ModelFile& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<bool> isDir_ = nullptr;
    std::shared_ptr<int64_t> modeTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
