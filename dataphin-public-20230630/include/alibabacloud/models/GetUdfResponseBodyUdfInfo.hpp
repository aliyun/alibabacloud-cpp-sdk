// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUDFRESPONSEBODYUDFINFO_HPP_
#define ALIBABACLOUD_MODELS_GETUDFRESPONSEBODYUDFINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetUdfResponseBodyUdfInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUdfResponseBodyUdfInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(CommandHelp, commandHelp_);
      DARABONBA_PTR_TO_JSON(ComputeEngineType, computeEngineType_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetUdfResponseBodyUdfInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(CommandHelp, commandHelp_);
      DARABONBA_PTR_FROM_JSON(ComputeEngineType, computeEngineType_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetUdfResponseBodyUdfInfo() = default ;
    GetUdfResponseBodyUdfInfo(const GetUdfResponseBodyUdfInfo &) = default ;
    GetUdfResponseBodyUdfInfo(GetUdfResponseBodyUdfInfo &&) = default ;
    GetUdfResponseBodyUdfInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUdfResponseBodyUdfInfo() = default ;
    GetUdfResponseBodyUdfInfo& operator=(const GetUdfResponseBodyUdfInfo &) = default ;
    GetUdfResponseBodyUdfInfo& operator=(GetUdfResponseBodyUdfInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->className_ != nullptr && this->commandHelp_ != nullptr && this->computeEngineType_ != nullptr && this->creator_ != nullptr && this->description_ != nullptr
        && this->directory_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->lastModifier_ != nullptr
        && this->name_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline GetUdfResponseBodyUdfInfo& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline GetUdfResponseBodyUdfInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // commandHelp Field Functions 
    bool hasCommandHelp() const { return this->commandHelp_ != nullptr;};
    void deleteCommandHelp() { this->commandHelp_ = nullptr;};
    inline string commandHelp() const { DARABONBA_PTR_GET_DEFAULT(commandHelp_, "") };
    inline GetUdfResponseBodyUdfInfo& setCommandHelp(string commandHelp) { DARABONBA_PTR_SET_VALUE(commandHelp_, commandHelp) };


    // computeEngineType Field Functions 
    bool hasComputeEngineType() const { return this->computeEngineType_ != nullptr;};
    void deleteComputeEngineType() { this->computeEngineType_ = nullptr;};
    inline string computeEngineType() const { DARABONBA_PTR_GET_DEFAULT(computeEngineType_, "") };
    inline GetUdfResponseBodyUdfInfo& setComputeEngineType(string computeEngineType) { DARABONBA_PTR_SET_VALUE(computeEngineType_, computeEngineType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetUdfResponseBodyUdfInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUdfResponseBodyUdfInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline GetUdfResponseBodyUdfInfo& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetUdfResponseBodyUdfInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetUdfResponseBodyUdfInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetUdfResponseBodyUdfInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline GetUdfResponseBodyUdfInfo& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUdfResponseBodyUdfInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int32_t> category_ = nullptr;
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<string> commandHelp_ = nullptr;
    std::shared_ptr<string> computeEngineType_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> directory_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
