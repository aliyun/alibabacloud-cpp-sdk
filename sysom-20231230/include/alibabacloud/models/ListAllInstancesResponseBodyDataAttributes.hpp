// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLINSTANCESRESPONSEBODYDATAATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTALLINSTANCESRESPONSEBODYDATAATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAllInstancesResponseBodyDataAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllInstancesResponseBodyDataAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(infoKey, infoKey_);
      DARABONBA_PTR_TO_JSON(infoType, infoType_);
      DARABONBA_PTR_TO_JSON(infoValue, infoValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllInstancesResponseBodyDataAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(infoKey, infoKey_);
      DARABONBA_PTR_FROM_JSON(infoType, infoType_);
      DARABONBA_PTR_FROM_JSON(infoValue, infoValue_);
    };
    ListAllInstancesResponseBodyDataAttributes() = default ;
    ListAllInstancesResponseBodyDataAttributes(const ListAllInstancesResponseBodyDataAttributes &) = default ;
    ListAllInstancesResponseBodyDataAttributes(ListAllInstancesResponseBodyDataAttributes &&) = default ;
    ListAllInstancesResponseBodyDataAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllInstancesResponseBodyDataAttributes() = default ;
    ListAllInstancesResponseBodyDataAttributes& operator=(const ListAllInstancesResponseBodyDataAttributes &) = default ;
    ListAllInstancesResponseBodyDataAttributes& operator=(ListAllInstancesResponseBodyDataAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->infoKey_ != nullptr
        && this->infoType_ != nullptr && this->infoValue_ != nullptr; };
    // infoKey Field Functions 
    bool hasInfoKey() const { return this->infoKey_ != nullptr;};
    void deleteInfoKey() { this->infoKey_ = nullptr;};
    inline string infoKey() const { DARABONBA_PTR_GET_DEFAULT(infoKey_, "") };
    inline ListAllInstancesResponseBodyDataAttributes& setInfoKey(string infoKey) { DARABONBA_PTR_SET_VALUE(infoKey_, infoKey) };


    // infoType Field Functions 
    bool hasInfoType() const { return this->infoType_ != nullptr;};
    void deleteInfoType() { this->infoType_ = nullptr;};
    inline string infoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
    inline ListAllInstancesResponseBodyDataAttributes& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


    // infoValue Field Functions 
    bool hasInfoValue() const { return this->infoValue_ != nullptr;};
    void deleteInfoValue() { this->infoValue_ = nullptr;};
    inline string infoValue() const { DARABONBA_PTR_GET_DEFAULT(infoValue_, "") };
    inline ListAllInstancesResponseBodyDataAttributes& setInfoValue(string infoValue) { DARABONBA_PTR_SET_VALUE(infoValue_, infoValue) };


  protected:
    std::shared_ptr<string> infoKey_ = nullptr;
    std::shared_ptr<string> infoType_ = nullptr;
    std::shared_ptr<string> infoValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
