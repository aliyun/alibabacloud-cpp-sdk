// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACALLERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACALLERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSessionGroupResponseBodyDataDataCallerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyDataDataCallerList& obj) { 
      DARABONBA_PTR_TO_JSON(CallerList, callerList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyDataDataCallerList& obj) { 
      DARABONBA_PTR_FROM_JSON(CallerList, callerList_);
    };
    ListSessionGroupResponseBodyDataDataCallerList() = default ;
    ListSessionGroupResponseBodyDataDataCallerList(const ListSessionGroupResponseBodyDataDataCallerList &) = default ;
    ListSessionGroupResponseBodyDataDataCallerList(ListSessionGroupResponseBodyDataDataCallerList &&) = default ;
    ListSessionGroupResponseBodyDataDataCallerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyDataDataCallerList() = default ;
    ListSessionGroupResponseBodyDataDataCallerList& operator=(const ListSessionGroupResponseBodyDataDataCallerList &) = default ;
    ListSessionGroupResponseBodyDataDataCallerList& operator=(ListSessionGroupResponseBodyDataDataCallerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callerList_ != nullptr; };
    // callerList Field Functions 
    bool hasCallerList() const { return this->callerList_ != nullptr;};
    void deleteCallerList() { this->callerList_ = nullptr;};
    inline const vector<string> & callerList() const { DARABONBA_PTR_GET_CONST(callerList_, vector<string>) };
    inline vector<string> callerList() { DARABONBA_PTR_GET(callerList_, vector<string>) };
    inline ListSessionGroupResponseBodyDataDataCallerList& setCallerList(const vector<string> & callerList) { DARABONBA_PTR_SET_VALUE(callerList_, callerList) };
    inline ListSessionGroupResponseBodyDataDataCallerList& setCallerList(vector<string> && callerList) { DARABONBA_PTR_SET_RVALUE(callerList_, callerList) };


  protected:
    std::shared_ptr<vector<string>> callerList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
