// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BASECITYINFOSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_BASECITYINFOSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class BaseCityInfoSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BaseCityInfoSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameTree, nameTree_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, BaseCityInfoSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameTree, nameTree_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    BaseCityInfoSearchResponseBodyModule() = default ;
    BaseCityInfoSearchResponseBodyModule(const BaseCityInfoSearchResponseBodyModule &) = default ;
    BaseCityInfoSearchResponseBodyModule(BaseCityInfoSearchResponseBodyModule &&) = default ;
    BaseCityInfoSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BaseCityInfoSearchResponseBodyModule() = default ;
    BaseCityInfoSearchResponseBodyModule& operator=(const BaseCityInfoSearchResponseBodyModule &) = default ;
    BaseCityInfoSearchResponseBodyModule& operator=(BaseCityInfoSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr && this->nameTree_ != nullptr && this->region_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BaseCityInfoSearchResponseBodyModule& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BaseCityInfoSearchResponseBodyModule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameTree Field Functions 
    bool hasNameTree() const { return this->nameTree_ != nullptr;};
    void deleteNameTree() { this->nameTree_ = nullptr;};
    inline string nameTree() const { DARABONBA_PTR_GET_DEFAULT(nameTree_, "") };
    inline BaseCityInfoSearchResponseBodyModule& setNameTree(string nameTree) { DARABONBA_PTR_SET_VALUE(nameTree_, nameTree) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline BaseCityInfoSearchResponseBodyModule& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameTree_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
