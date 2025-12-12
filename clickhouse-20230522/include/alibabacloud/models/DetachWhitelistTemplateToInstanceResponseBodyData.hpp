// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachWhitelistTemplateToInstanceResponseBodyDataDetachFailList.hpp>
#include <alibabacloud/models/DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DetachWhitelistTemplateToInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachWhitelistTemplateToInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetachFailList, detachFailList_);
      DARABONBA_PTR_TO_JSON(DetachSuccessedList, detachSuccessedList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DetachWhitelistTemplateToInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetachFailList, detachFailList_);
      DARABONBA_PTR_FROM_JSON(DetachSuccessedList, detachSuccessedList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DetachWhitelistTemplateToInstanceResponseBodyData() = default ;
    DetachWhitelistTemplateToInstanceResponseBodyData(const DetachWhitelistTemplateToInstanceResponseBodyData &) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyData(DetachWhitelistTemplateToInstanceResponseBodyData &&) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachWhitelistTemplateToInstanceResponseBodyData() = default ;
    DetachWhitelistTemplateToInstanceResponseBodyData& operator=(const DetachWhitelistTemplateToInstanceResponseBodyData &) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyData& operator=(DetachWhitelistTemplateToInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detachFailList_ == nullptr
        && return this->detachSuccessedList_ == nullptr && return this->status_ == nullptr; };
    // detachFailList Field Functions 
    bool hasDetachFailList() const { return this->detachFailList_ != nullptr;};
    void deleteDetachFailList() { this->detachFailList_ = nullptr;};
    inline const vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachFailList> & detachFailList() const { DARABONBA_PTR_GET_CONST(detachFailList_, vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachFailList>) };
    inline vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachFailList> detachFailList() { DARABONBA_PTR_GET(detachFailList_, vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachFailList>) };
    inline DetachWhitelistTemplateToInstanceResponseBodyData& setDetachFailList(const vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachFailList> & detachFailList) { DARABONBA_PTR_SET_VALUE(detachFailList_, detachFailList) };
    inline DetachWhitelistTemplateToInstanceResponseBodyData& setDetachFailList(vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachFailList> && detachFailList) { DARABONBA_PTR_SET_RVALUE(detachFailList_, detachFailList) };


    // detachSuccessedList Field Functions 
    bool hasDetachSuccessedList() const { return this->detachSuccessedList_ != nullptr;};
    void deleteDetachSuccessedList() { this->detachSuccessedList_ = nullptr;};
    inline const vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedList> & detachSuccessedList() const { DARABONBA_PTR_GET_CONST(detachSuccessedList_, vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedList>) };
    inline vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedList> detachSuccessedList() { DARABONBA_PTR_GET(detachSuccessedList_, vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedList>) };
    inline DetachWhitelistTemplateToInstanceResponseBodyData& setDetachSuccessedList(const vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedList> & detachSuccessedList) { DARABONBA_PTR_SET_VALUE(detachSuccessedList_, detachSuccessedList) };
    inline DetachWhitelistTemplateToInstanceResponseBodyData& setDetachSuccessedList(vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedList> && detachSuccessedList) { DARABONBA_PTR_SET_RVALUE(detachSuccessedList_, detachSuccessedList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DetachWhitelistTemplateToInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachFailList>> detachFailList_ = nullptr;
    std::shared_ptr<vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedList>> detachSuccessedList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
