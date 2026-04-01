// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKEYSTORESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKEYSTORESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateKeystoresRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKeystoresRequest& obj) { 
      DARABONBA_PTR_TO_JSON(remove, remove_);
      DARABONBA_PTR_TO_JSON(update, update_);
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKeystoresRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(remove, remove_);
      DARABONBA_PTR_FROM_JSON(update, update_);
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    UpdateKeystoresRequest() = default ;
    UpdateKeystoresRequest(const UpdateKeystoresRequest &) = default ;
    UpdateKeystoresRequest(UpdateKeystoresRequest &&) = default ;
    UpdateKeystoresRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKeystoresRequest() = default ;
    UpdateKeystoresRequest& operator=(const UpdateKeystoresRequest &) = default ;
    UpdateKeystoresRequest& operator=(UpdateKeystoresRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remove_ == nullptr
        && this->update_ == nullptr && this->force_ == nullptr; };
    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline const vector<string> & getRemove() const { DARABONBA_PTR_GET_CONST(remove_, vector<string>) };
    inline vector<string> getRemove() { DARABONBA_PTR_GET(remove_, vector<string>) };
    inline UpdateKeystoresRequest& setRemove(const vector<string> & remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };
    inline UpdateKeystoresRequest& setRemove(vector<string> && remove) { DARABONBA_PTR_SET_RVALUE(remove_, remove) };


    // update Field Functions 
    bool hasUpdate() const { return this->update_ != nullptr;};
    void deleteUpdate() { this->update_ = nullptr;};
    inline const map<string, string> & getUpdate() const { DARABONBA_PTR_GET_CONST(update_, map<string, string>) };
    inline map<string, string> getUpdate() { DARABONBA_PTR_GET(update_, map<string, string>) };
    inline UpdateKeystoresRequest& setUpdate(const map<string, string> & update) { DARABONBA_PTR_SET_VALUE(update_, update) };
    inline UpdateKeystoresRequest& setUpdate(map<string, string> && update) { DARABONBA_PTR_SET_RVALUE(update_, update) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline string getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, "") };
    inline UpdateKeystoresRequest& setForce(string force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    shared_ptr<vector<string>> remove_ {};
    shared_ptr<map<string, string>> update_ {};
    shared_ptr<string> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
