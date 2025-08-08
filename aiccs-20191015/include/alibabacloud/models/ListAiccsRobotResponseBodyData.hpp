// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICCSROBOTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAICCSROBOTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListAiccsRobotResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAiccsRobotResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AtProfession, atProfession_);
      DARABONBA_PTR_TO_JSON(AtSence, atSence_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RobotName, robotName_);
      DARABONBA_PTR_TO_JSON(RobotType, robotType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAiccsRobotResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AtProfession, atProfession_);
      DARABONBA_PTR_FROM_JSON(AtSence, atSence_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
      DARABONBA_PTR_FROM_JSON(RobotType, robotType_);
    };
    ListAiccsRobotResponseBodyData() = default ;
    ListAiccsRobotResponseBodyData(const ListAiccsRobotResponseBodyData &) = default ;
    ListAiccsRobotResponseBodyData(ListAiccsRobotResponseBodyData &&) = default ;
    ListAiccsRobotResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAiccsRobotResponseBodyData() = default ;
    ListAiccsRobotResponseBodyData& operator=(const ListAiccsRobotResponseBodyData &) = default ;
    ListAiccsRobotResponseBodyData& operator=(ListAiccsRobotResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->atProfession_ != nullptr
        && this->atSence_ != nullptr && this->id_ != nullptr && this->robotName_ != nullptr && this->robotType_ != nullptr; };
    // atProfession Field Functions 
    bool hasAtProfession() const { return this->atProfession_ != nullptr;};
    void deleteAtProfession() { this->atProfession_ = nullptr;};
    inline string atProfession() const { DARABONBA_PTR_GET_DEFAULT(atProfession_, "") };
    inline ListAiccsRobotResponseBodyData& setAtProfession(string atProfession) { DARABONBA_PTR_SET_VALUE(atProfession_, atProfession) };


    // atSence Field Functions 
    bool hasAtSence() const { return this->atSence_ != nullptr;};
    void deleteAtSence() { this->atSence_ = nullptr;};
    inline string atSence() const { DARABONBA_PTR_GET_DEFAULT(atSence_, "") };
    inline ListAiccsRobotResponseBodyData& setAtSence(string atSence) { DARABONBA_PTR_SET_VALUE(atSence_, atSence) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListAiccsRobotResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // robotName Field Functions 
    bool hasRobotName() const { return this->robotName_ != nullptr;};
    void deleteRobotName() { this->robotName_ = nullptr;};
    inline string robotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
    inline ListAiccsRobotResponseBodyData& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


    // robotType Field Functions 
    bool hasRobotType() const { return this->robotType_ != nullptr;};
    void deleteRobotType() { this->robotType_ = nullptr;};
    inline string robotType() const { DARABONBA_PTR_GET_DEFAULT(robotType_, "") };
    inline ListAiccsRobotResponseBodyData& setRobotType(string robotType) { DARABONBA_PTR_SET_VALUE(robotType_, robotType) };


  protected:
    std::shared_ptr<string> atProfession_ = nullptr;
    std::shared_ptr<string> atSence_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> robotName_ = nullptr;
    std::shared_ptr<string> robotType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
