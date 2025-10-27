// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECHECKINSTANCERESULTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVECHECKINSTANCERESULTWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class RemoveCheckInstanceResultWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveCheckInstanceResultWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveCheckInstanceResultWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    RemoveCheckInstanceResultWhiteListRequest() = default ;
    RemoveCheckInstanceResultWhiteListRequest(const RemoveCheckInstanceResultWhiteListRequest &) = default ;
    RemoveCheckInstanceResultWhiteListRequest(RemoveCheckInstanceResultWhiteListRequest &&) = default ;
    RemoveCheckInstanceResultWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveCheckInstanceResultWhiteListRequest() = default ;
    RemoveCheckInstanceResultWhiteListRequest& operator=(const RemoveCheckInstanceResultWhiteListRequest &) = default ;
    RemoveCheckInstanceResultWhiteListRequest& operator=(RemoveCheckInstanceResultWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->instanceIds_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline RemoveCheckInstanceResultWhiteListRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RemoveCheckInstanceResultWhiteListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RemoveCheckInstanceResultWhiteListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The IDs of instances. Separate multiple IDs with commas (,).
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
