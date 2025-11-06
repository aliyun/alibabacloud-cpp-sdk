// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGERESPONSEBODYDATAVOLISTEXCHANGVO_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGERESPONSEBODYDATAVOLISTEXCHANGVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListExchangeResponseBodyDataVoListExchangVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangeResponseBodyDataVoListExchangVO& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangeResponseBodyDataVoListExchangVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    ListExchangeResponseBodyDataVoListExchangVO() = default ;
    ListExchangeResponseBodyDataVoListExchangVO(const ListExchangeResponseBodyDataVoListExchangVO &) = default ;
    ListExchangeResponseBodyDataVoListExchangVO(ListExchangeResponseBodyDataVoListExchangVO &&) = default ;
    ListExchangeResponseBodyDataVoListExchangVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangeResponseBodyDataVoListExchangVO() = default ;
    ListExchangeResponseBodyDataVoListExchangVO& operator=(const ListExchangeResponseBodyDataVoListExchangVO &) = default ;
    ListExchangeResponseBodyDataVoListExchangVO& operator=(ListExchangeResponseBodyDataVoListExchangVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->autoDelete_ == nullptr && return this->canDelete_ == nullptr && return this->createTime_ == nullptr && return this->exchangeType_ == nullptr && return this->internal_ == nullptr
        && return this->name_ == nullptr && return this->vhostName_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline ListExchangeResponseBodyDataVoListExchangVO& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // autoDelete Field Functions 
    bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
    void deleteAutoDelete() { this->autoDelete_ = nullptr;};
    inline bool autoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, false) };
    inline ListExchangeResponseBodyDataVoListExchangVO& setAutoDelete(bool autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


    // canDelete Field Functions 
    bool hasCanDelete() const { return this->canDelete_ != nullptr;};
    void deleteCanDelete() { this->canDelete_ = nullptr;};
    inline bool canDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
    inline ListExchangeResponseBodyDataVoListExchangVO& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListExchangeResponseBodyDataVoListExchangVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // exchangeType Field Functions 
    bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
    void deleteExchangeType() { this->exchangeType_ = nullptr;};
    inline int32_t exchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, 0) };
    inline ListExchangeResponseBodyDataVoListExchangVO& setExchangeType(int32_t exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline bool internal() const { DARABONBA_PTR_GET_DEFAULT(internal_, false) };
    inline ListExchangeResponseBodyDataVoListExchangVO& setInternal(bool internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListExchangeResponseBodyDataVoListExchangVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline ListExchangeResponseBodyDataVoListExchangVO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> attributes_ = nullptr;
    std::shared_ptr<bool> autoDelete_ = nullptr;
    std::shared_ptr<bool> canDelete_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int32_t> exchangeType_ = nullptr;
    std::shared_ptr<bool> internal_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
