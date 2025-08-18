// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODYCODEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODYCODEVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineCodeVersionsResponseBodyCodeVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineCodeVersionsResponseBodyCodeVersions& obj) { 
      DARABONBA_PTR_TO_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineCodeVersionsResponseBodyCodeVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeDescription, codeDescription_);
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
    };
    ListRoutineCodeVersionsResponseBodyCodeVersions() = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions(const ListRoutineCodeVersionsResponseBodyCodeVersions &) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions(ListRoutineCodeVersionsResponseBodyCodeVersions &&) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineCodeVersionsResponseBodyCodeVersions() = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions& operator=(const ListRoutineCodeVersionsResponseBodyCodeVersions &) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersions& operator=(ListRoutineCodeVersionsResponseBodyCodeVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeDescription_ != nullptr
        && this->codeVersion_ != nullptr && this->createTime_ != nullptr; };
    // codeDescription Field Functions 
    bool hasCodeDescription() const { return this->codeDescription_ != nullptr;};
    void deleteCodeDescription() { this->codeDescription_ = nullptr;};
    inline string codeDescription() const { DARABONBA_PTR_GET_DEFAULT(codeDescription_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setCodeDescription(string codeDescription) { DARABONBA_PTR_SET_VALUE(codeDescription_, codeDescription) };


    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


  protected:
    std::shared_ptr<string> codeDescription_ = nullptr;
    std::shared_ptr<string> codeVersion_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
