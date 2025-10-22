// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTBYIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTBYIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAgentByIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentByIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(ForeignKey, foreignKey_);
      DARABONBA_PTR_TO_JSON(ForeignNick, foreignNick_);
      DARABONBA_PTR_TO_JSON(RealName, realName_);
      DARABONBA_PTR_TO_JSON(ServicerType, servicerType_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentByIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(ForeignKey, foreignKey_);
      DARABONBA_PTR_FROM_JSON(ForeignNick, foreignNick_);
      DARABONBA_PTR_FROM_JSON(RealName, realName_);
      DARABONBA_PTR_FROM_JSON(ServicerType, servicerType_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    GetAgentByIdResponseBodyData() = default ;
    GetAgentByIdResponseBodyData(const GetAgentByIdResponseBodyData &) = default ;
    GetAgentByIdResponseBodyData(GetAgentByIdResponseBodyData &&) = default ;
    GetAgentByIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentByIdResponseBodyData() = default ;
    GetAgentByIdResponseBodyData& operator=(const GetAgentByIdResponseBodyData &) = default ;
    GetAgentByIdResponseBodyData& operator=(GetAgentByIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->createUserName_ == nullptr && return this->foreignKey_ == nullptr && return this->foreignNick_ == nullptr && return this->realName_ == nullptr && return this->servicerType_ == nullptr
        && return this->showName_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int32_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0) };
    inline GetAgentByIdResponseBodyData& setAgentId(int32_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline GetAgentByIdResponseBodyData& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // foreignKey Field Functions 
    bool hasForeignKey() const { return this->foreignKey_ != nullptr;};
    void deleteForeignKey() { this->foreignKey_ = nullptr;};
    inline string foreignKey() const { DARABONBA_PTR_GET_DEFAULT(foreignKey_, "") };
    inline GetAgentByIdResponseBodyData& setForeignKey(string foreignKey) { DARABONBA_PTR_SET_VALUE(foreignKey_, foreignKey) };


    // foreignNick Field Functions 
    bool hasForeignNick() const { return this->foreignNick_ != nullptr;};
    void deleteForeignNick() { this->foreignNick_ = nullptr;};
    inline string foreignNick() const { DARABONBA_PTR_GET_DEFAULT(foreignNick_, "") };
    inline GetAgentByIdResponseBodyData& setForeignNick(string foreignNick) { DARABONBA_PTR_SET_VALUE(foreignNick_, foreignNick) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline GetAgentByIdResponseBodyData& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // servicerType Field Functions 
    bool hasServicerType() const { return this->servicerType_ != nullptr;};
    void deleteServicerType() { this->servicerType_ = nullptr;};
    inline int32_t servicerType() const { DARABONBA_PTR_GET_DEFAULT(servicerType_, 0) };
    inline GetAgentByIdResponseBodyData& setServicerType(int32_t servicerType) { DARABONBA_PTR_SET_VALUE(servicerType_, servicerType) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetAgentByIdResponseBodyData& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    std::shared_ptr<int32_t> agentId_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<string> foreignKey_ = nullptr;
    std::shared_ptr<string> foreignNick_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<int32_t> servicerType_ = nullptr;
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
