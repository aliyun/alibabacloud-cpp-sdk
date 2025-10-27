// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYCOLUMNSGRIDS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYCOLUMNSGRIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckInstanceResultResponseBodyColumnsGrids : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckInstanceResultResponseBodyColumnsGrids& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckInstanceResultResponseBodyColumnsGrids& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCheckInstanceResultResponseBodyColumnsGrids() = default ;
    ListCheckInstanceResultResponseBodyColumnsGrids(const ListCheckInstanceResultResponseBodyColumnsGrids &) = default ;
    ListCheckInstanceResultResponseBodyColumnsGrids(ListCheckInstanceResultResponseBodyColumnsGrids &&) = default ;
    ListCheckInstanceResultResponseBodyColumnsGrids(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckInstanceResultResponseBodyColumnsGrids() = default ;
    ListCheckInstanceResultResponseBodyColumnsGrids& operator=(const ListCheckInstanceResultResponseBodyColumnsGrids &) = default ;
    ListCheckInstanceResultResponseBodyColumnsGrids& operator=(ListCheckInstanceResultResponseBodyColumnsGrids &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->showName_ == nullptr && return this->type_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListCheckInstanceResultResponseBodyColumnsGrids& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListCheckInstanceResultResponseBodyColumnsGrids& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCheckInstanceResultResponseBodyColumnsGrids& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The search condition.
    std::shared_ptr<string> key_ = nullptr;
    // The display name of the search condition.
    std::shared_ptr<string> showName_ = nullptr;
    // The format of the check result for the instance. Valid values:
    // 
    // *   **text**
    // *   **link**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
