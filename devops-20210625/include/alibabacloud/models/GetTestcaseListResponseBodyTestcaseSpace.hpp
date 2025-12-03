// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTCASELISTRESPONSEBODYTESTCASESPACE_HPP_
#define ALIBABACLOUD_MODELS_GETTESTCASELISTRESPONSEBODYTESTCASESPACE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestcaseListResponseBodyTestcaseSpace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestcaseListResponseBodyTestcaseSpace& obj) { 
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestcaseListResponseBodyTestcaseSpace& obj) { 
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetTestcaseListResponseBodyTestcaseSpace() = default ;
    GetTestcaseListResponseBodyTestcaseSpace(const GetTestcaseListResponseBodyTestcaseSpace &) = default ;
    GetTestcaseListResponseBodyTestcaseSpace(GetTestcaseListResponseBodyTestcaseSpace &&) = default ;
    GetTestcaseListResponseBodyTestcaseSpace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestcaseListResponseBodyTestcaseSpace() = default ;
    GetTestcaseListResponseBodyTestcaseSpace& operator=(const GetTestcaseListResponseBodyTestcaseSpace &) = default ;
    GetTestcaseListResponseBodyTestcaseSpace& operator=(GetTestcaseListResponseBodyTestcaseSpace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->spaceIdentifier_ == nullptr
        && return this->type_ == nullptr; };
    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline GetTestcaseListResponseBodyTestcaseSpace& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTestcaseListResponseBodyTestcaseSpace& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
