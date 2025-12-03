// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTCASELISTRESPONSEBODYTESTCASETAGS_HPP_
#define ALIBABACLOUD_MODELS_GETTESTCASELISTRESPONSEBODYTESTCASETAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestcaseListResponseBodyTestcaseTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestcaseListResponseBodyTestcaseTags& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tagIdentifier, tagIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestcaseListResponseBodyTestcaseTags& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tagIdentifier, tagIdentifier_);
    };
    GetTestcaseListResponseBodyTestcaseTags() = default ;
    GetTestcaseListResponseBodyTestcaseTags(const GetTestcaseListResponseBodyTestcaseTags &) = default ;
    GetTestcaseListResponseBodyTestcaseTags(GetTestcaseListResponseBodyTestcaseTags &&) = default ;
    GetTestcaseListResponseBodyTestcaseTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestcaseListResponseBodyTestcaseTags() = default ;
    GetTestcaseListResponseBodyTestcaseTags& operator=(const GetTestcaseListResponseBodyTestcaseTags &) = default ;
    GetTestcaseListResponseBodyTestcaseTags& operator=(GetTestcaseListResponseBodyTestcaseTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->tagIdentifier_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTestcaseListResponseBodyTestcaseTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tagIdentifier Field Functions 
    bool hasTagIdentifier() const { return this->tagIdentifier_ != nullptr;};
    void deleteTagIdentifier() { this->tagIdentifier_ = nullptr;};
    inline string tagIdentifier() const { DARABONBA_PTR_GET_DEFAULT(tagIdentifier_, "") };
    inline GetTestcaseListResponseBodyTestcaseTags& setTagIdentifier(string tagIdentifier) { DARABONBA_PTR_SET_VALUE(tagIdentifier_, tagIdentifier) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> tagIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
