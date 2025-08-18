// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUESTCREATECOMMANDFILTERLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUESTCREATECOMMANDFILTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateNodeSupplementRequestCreateCommandFilterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeSupplementRequestCreateCommandFilterList& obj) { 
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ValueList, valueList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeSupplementRequestCreateCommandFilterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
    };
    CreateNodeSupplementRequestCreateCommandFilterList() = default ;
    CreateNodeSupplementRequestCreateCommandFilterList(const CreateNodeSupplementRequestCreateCommandFilterList &) = default ;
    CreateNodeSupplementRequestCreateCommandFilterList(CreateNodeSupplementRequestCreateCommandFilterList &&) = default ;
    CreateNodeSupplementRequestCreateCommandFilterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeSupplementRequestCreateCommandFilterList() = default ;
    CreateNodeSupplementRequestCreateCommandFilterList& operator=(const CreateNodeSupplementRequestCreateCommandFilterList &) = default ;
    CreateNodeSupplementRequestCreateCommandFilterList& operator=(CreateNodeSupplementRequestCreateCommandFilterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exclude_ != nullptr
        && this->key_ != nullptr && this->valueList_ != nullptr; };
    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline bool exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, false) };
    inline CreateNodeSupplementRequestCreateCommandFilterList& setExclude(bool exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateNodeSupplementRequestCreateCommandFilterList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // valueList Field Functions 
    bool hasValueList() const { return this->valueList_ != nullptr;};
    void deleteValueList() { this->valueList_ = nullptr;};
    inline const vector<string> & valueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
    inline vector<string> valueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
    inline CreateNodeSupplementRequestCreateCommandFilterList& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
    inline CreateNodeSupplementRequestCreateCommandFilterList& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


  protected:
    std::shared_ptr<bool> exclude_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<vector<string>> valueList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
