// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGESRESPONSEBODYDATAEXCHANGES_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGESRESPONSEBODYDATAEXCHANGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListExchangesResponseBodyDataExchanges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangesResponseBodyDataExchanges& obj) { 
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(AutoDeleteState, autoDeleteState_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VHostName, VHostName_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangesResponseBodyDataExchanges& obj) { 
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(AutoDeleteState, autoDeleteState_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VHostName, VHostName_);
    };
    ListExchangesResponseBodyDataExchanges() = default ;
    ListExchangesResponseBodyDataExchanges(const ListExchangesResponseBodyDataExchanges &) = default ;
    ListExchangesResponseBodyDataExchanges(ListExchangesResponseBodyDataExchanges &&) = default ;
    ListExchangesResponseBodyDataExchanges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangesResponseBodyDataExchanges() = default ;
    ListExchangesResponseBodyDataExchanges& operator=(const ListExchangesResponseBodyDataExchanges &) = default ;
    ListExchangesResponseBodyDataExchanges& operator=(ListExchangesResponseBodyDataExchanges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->autoDeleteState_ == nullptr && return this->createTime_ == nullptr && return this->exchangeType_ == nullptr && return this->name_ == nullptr && return this->VHostName_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline ListExchangesResponseBodyDataExchanges& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline ListExchangesResponseBodyDataExchanges& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // autoDeleteState Field Functions 
    bool hasAutoDeleteState() const { return this->autoDeleteState_ != nullptr;};
    void deleteAutoDeleteState() { this->autoDeleteState_ = nullptr;};
    inline bool autoDeleteState() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteState_, false) };
    inline ListExchangesResponseBodyDataExchanges& setAutoDeleteState(bool autoDeleteState) { DARABONBA_PTR_SET_VALUE(autoDeleteState_, autoDeleteState) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListExchangesResponseBodyDataExchanges& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // exchangeType Field Functions 
    bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
    void deleteExchangeType() { this->exchangeType_ = nullptr;};
    inline string exchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, "") };
    inline ListExchangesResponseBodyDataExchanges& setExchangeType(string exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListExchangesResponseBodyDataExchanges& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // VHostName Field Functions 
    bool hasVHostName() const { return this->VHostName_ != nullptr;};
    void deleteVHostName() { this->VHostName_ = nullptr;};
    inline string VHostName() const { DARABONBA_PTR_GET_DEFAULT(VHostName_, "") };
    inline ListExchangesResponseBodyDataExchanges& setVHostName(string VHostName) { DARABONBA_PTR_SET_VALUE(VHostName_, VHostName) };


  protected:
    // The attributes. This parameter is unavailable in the current version.
    Darabonba::Json attributes_ = nullptr;
    // Indicates whether the exchange was automatically deleted.
    std::shared_ptr<bool> autoDeleteState_ = nullptr;
    // The timestamp that indicates when the exchange was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The exchange type.
    std::shared_ptr<string> exchangeType_ = nullptr;
    // The exchange name.
    std::shared_ptr<string> name_ = nullptr;
    // The vhost name.
    std::shared_ptr<string> VHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
