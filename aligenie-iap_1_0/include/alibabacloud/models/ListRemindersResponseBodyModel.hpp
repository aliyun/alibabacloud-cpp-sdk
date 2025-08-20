// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDERSRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDERSRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRemindersResponseBodyModelRemindResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class ListRemindersResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindersResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(RemindResponses, remindResponses_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindersResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(RemindResponses, remindResponses_);
    };
    ListRemindersResponseBodyModel() = default ;
    ListRemindersResponseBodyModel(const ListRemindersResponseBodyModel &) = default ;
    ListRemindersResponseBodyModel(ListRemindersResponseBodyModel &&) = default ;
    ListRemindersResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindersResponseBodyModel() = default ;
    ListRemindersResponseBodyModel& operator=(const ListRemindersResponseBodyModel &) = default ;
    ListRemindersResponseBodyModel& operator=(ListRemindersResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remindResponses_ != nullptr; };
    // remindResponses Field Functions 
    bool hasRemindResponses() const { return this->remindResponses_ != nullptr;};
    void deleteRemindResponses() { this->remindResponses_ = nullptr;};
    inline const vector<Models::ListRemindersResponseBodyModelRemindResponses> & remindResponses() const { DARABONBA_PTR_GET_CONST(remindResponses_, vector<Models::ListRemindersResponseBodyModelRemindResponses>) };
    inline vector<Models::ListRemindersResponseBodyModelRemindResponses> remindResponses() { DARABONBA_PTR_GET(remindResponses_, vector<Models::ListRemindersResponseBodyModelRemindResponses>) };
    inline ListRemindersResponseBodyModel& setRemindResponses(const vector<Models::ListRemindersResponseBodyModelRemindResponses> & remindResponses) { DARABONBA_PTR_SET_VALUE(remindResponses_, remindResponses) };
    inline ListRemindersResponseBodyModel& setRemindResponses(vector<Models::ListRemindersResponseBodyModelRemindResponses> && remindResponses) { DARABONBA_PTR_SET_RVALUE(remindResponses_, remindResponses) };


  protected:
    std::shared_ptr<vector<Models::ListRemindersResponseBodyModelRemindResponses>> remindResponses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
