// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDRAWRECORDBYPKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDRAWRECORDBYPKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserDrawRecordByPkResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDrawRecordByPkResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(drawGroup, drawGroup_);
      DARABONBA_PTR_TO_JSON(drawPoolName, drawPoolName_);
      DARABONBA_PTR_TO_JSON(drawResult, drawResult_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(taskGroupId, taskGroupId_);
      DARABONBA_PTR_TO_JSON(uccId, uccId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDrawRecordByPkResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(drawGroup, drawGroup_);
      DARABONBA_PTR_FROM_JSON(drawPoolName, drawPoolName_);
      DARABONBA_PTR_FROM_JSON(drawResult, drawResult_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(taskGroupId, taskGroupId_);
      DARABONBA_PTR_FROM_JSON(uccId, uccId_);
    };
    ListUserDrawRecordByPkResponseBodyData() = default ;
    ListUserDrawRecordByPkResponseBodyData(const ListUserDrawRecordByPkResponseBodyData &) = default ;
    ListUserDrawRecordByPkResponseBodyData(ListUserDrawRecordByPkResponseBodyData &&) = default ;
    ListUserDrawRecordByPkResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDrawRecordByPkResponseBodyData() = default ;
    ListUserDrawRecordByPkResponseBodyData& operator=(const ListUserDrawRecordByPkResponseBodyData &) = default ;
    ListUserDrawRecordByPkResponseBodyData& operator=(ListUserDrawRecordByPkResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && return this->drawGroup_ == nullptr && return this->drawPoolName_ == nullptr && return this->drawResult_ == nullptr && return this->gmtCreate_ == nullptr && return this->taskGroupId_ == nullptr
        && return this->uccId_ == nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline ListUserDrawRecordByPkResponseBodyData& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // drawGroup Field Functions 
    bool hasDrawGroup() const { return this->drawGroup_ != nullptr;};
    void deleteDrawGroup() { this->drawGroup_ = nullptr;};
    inline string drawGroup() const { DARABONBA_PTR_GET_DEFAULT(drawGroup_, "") };
    inline ListUserDrawRecordByPkResponseBodyData& setDrawGroup(string drawGroup) { DARABONBA_PTR_SET_VALUE(drawGroup_, drawGroup) };


    // drawPoolName Field Functions 
    bool hasDrawPoolName() const { return this->drawPoolName_ != nullptr;};
    void deleteDrawPoolName() { this->drawPoolName_ = nullptr;};
    inline string drawPoolName() const { DARABONBA_PTR_GET_DEFAULT(drawPoolName_, "") };
    inline ListUserDrawRecordByPkResponseBodyData& setDrawPoolName(string drawPoolName) { DARABONBA_PTR_SET_VALUE(drawPoolName_, drawPoolName) };


    // drawResult Field Functions 
    bool hasDrawResult() const { return this->drawResult_ != nullptr;};
    void deleteDrawResult() { this->drawResult_ = nullptr;};
    inline string drawResult() const { DARABONBA_PTR_GET_DEFAULT(drawResult_, "") };
    inline ListUserDrawRecordByPkResponseBodyData& setDrawResult(string drawResult) { DARABONBA_PTR_SET_VALUE(drawResult_, drawResult) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListUserDrawRecordByPkResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // taskGroupId Field Functions 
    bool hasTaskGroupId() const { return this->taskGroupId_ != nullptr;};
    void deleteTaskGroupId() { this->taskGroupId_ = nullptr;};
    inline string taskGroupId() const { DARABONBA_PTR_GET_DEFAULT(taskGroupId_, "") };
    inline ListUserDrawRecordByPkResponseBodyData& setTaskGroupId(string taskGroupId) { DARABONBA_PTR_SET_VALUE(taskGroupId_, taskGroupId) };


    // uccId Field Functions 
    bool hasUccId() const { return this->uccId_ != nullptr;};
    void deleteUccId() { this->uccId_ = nullptr;};
    inline string uccId() const { DARABONBA_PTR_GET_DEFAULT(uccId_, "") };
    inline ListUserDrawRecordByPkResponseBodyData& setUccId(string uccId) { DARABONBA_PTR_SET_VALUE(uccId_, uccId) };


  protected:
    std::shared_ptr<string> aliyunPk_ = nullptr;
    std::shared_ptr<string> drawGroup_ = nullptr;
    std::shared_ptr<string> drawPoolName_ = nullptr;
    std::shared_ptr<string> drawResult_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> taskGroupId_ = nullptr;
    std::shared_ptr<string> uccId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
