// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASCRIPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AScriptIds, AScriptIds_);
      DARABONBA_PTR_TO_JSON(AScriptNames, AScriptNames_);
      DARABONBA_PTR_TO_JSON(ListenerIds, listenerIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AScriptIds, AScriptIds_);
      DARABONBA_PTR_FROM_JSON(AScriptNames, AScriptNames_);
      DARABONBA_PTR_FROM_JSON(ListenerIds, listenerIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListAScriptsRequest() = default ;
    ListAScriptsRequest(const ListAScriptsRequest &) = default ;
    ListAScriptsRequest(ListAScriptsRequest &&) = default ;
    ListAScriptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAScriptsRequest() = default ;
    ListAScriptsRequest& operator=(const ListAScriptsRequest &) = default ;
    ListAScriptsRequest& operator=(ListAScriptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AScriptIds_ == nullptr
        && this->AScriptNames_ == nullptr && this->listenerIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // AScriptIds Field Functions 
    bool hasAScriptIds() const { return this->AScriptIds_ != nullptr;};
    void deleteAScriptIds() { this->AScriptIds_ = nullptr;};
    inline const vector<string> & getAScriptIds() const { DARABONBA_PTR_GET_CONST(AScriptIds_, vector<string>) };
    inline vector<string> getAScriptIds() { DARABONBA_PTR_GET(AScriptIds_, vector<string>) };
    inline ListAScriptsRequest& setAScriptIds(const vector<string> & AScriptIds) { DARABONBA_PTR_SET_VALUE(AScriptIds_, AScriptIds) };
    inline ListAScriptsRequest& setAScriptIds(vector<string> && AScriptIds) { DARABONBA_PTR_SET_RVALUE(AScriptIds_, AScriptIds) };


    // AScriptNames Field Functions 
    bool hasAScriptNames() const { return this->AScriptNames_ != nullptr;};
    void deleteAScriptNames() { this->AScriptNames_ = nullptr;};
    inline const vector<string> & getAScriptNames() const { DARABONBA_PTR_GET_CONST(AScriptNames_, vector<string>) };
    inline vector<string> getAScriptNames() { DARABONBA_PTR_GET(AScriptNames_, vector<string>) };
    inline ListAScriptsRequest& setAScriptNames(const vector<string> & AScriptNames) { DARABONBA_PTR_SET_VALUE(AScriptNames_, AScriptNames) };
    inline ListAScriptsRequest& setAScriptNames(vector<string> && AScriptNames) { DARABONBA_PTR_SET_RVALUE(AScriptNames_, AScriptNames) };


    // listenerIds Field Functions 
    bool hasListenerIds() const { return this->listenerIds_ != nullptr;};
    void deleteListenerIds() { this->listenerIds_ = nullptr;};
    inline const vector<string> & getListenerIds() const { DARABONBA_PTR_GET_CONST(listenerIds_, vector<string>) };
    inline vector<string> getListenerIds() { DARABONBA_PTR_GET(listenerIds_, vector<string>) };
    inline ListAScriptsRequest& setListenerIds(const vector<string> & listenerIds) { DARABONBA_PTR_SET_VALUE(listenerIds_, listenerIds) };
    inline ListAScriptsRequest& setListenerIds(vector<string> && listenerIds) { DARABONBA_PTR_SET_RVALUE(listenerIds_, listenerIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAScriptsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAScriptsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The AScript rule IDs. You can specify at most 20 IDs in each call.
    shared_ptr<vector<string>> AScriptIds_ {};
    // The AScript rule names. You can specify at most 10 names in each call.
    shared_ptr<vector<string>> AScriptNames_ {};
    // The listener IDs. You can specify at most 20 listener IDs in each call.
    shared_ptr<vector<string>> listenerIds_ {};
    // The maximum number of entries to return.
    // 
    // Valid values: **1** to **100**.
    // 
    // Default value: **20**. If you do not specify this parameter, the default value is used.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.****
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
