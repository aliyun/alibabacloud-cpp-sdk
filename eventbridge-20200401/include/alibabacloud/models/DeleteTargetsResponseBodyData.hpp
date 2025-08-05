// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETARGETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETETARGETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteTargetsResponseBodyDataErrorEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DeleteTargetsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTargetsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorEntries, errorEntries_);
      DARABONBA_PTR_TO_JSON(ErrorEntriesCount, errorEntriesCount_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTargetsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorEntries, errorEntries_);
      DARABONBA_PTR_FROM_JSON(ErrorEntriesCount, errorEntriesCount_);
    };
    DeleteTargetsResponseBodyData() = default ;
    DeleteTargetsResponseBodyData(const DeleteTargetsResponseBodyData &) = default ;
    DeleteTargetsResponseBodyData(DeleteTargetsResponseBodyData &&) = default ;
    DeleteTargetsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTargetsResponseBodyData() = default ;
    DeleteTargetsResponseBodyData& operator=(const DeleteTargetsResponseBodyData &) = default ;
    DeleteTargetsResponseBodyData& operator=(DeleteTargetsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorEntries_ != nullptr
        && this->errorEntriesCount_ != nullptr; };
    // errorEntries Field Functions 
    bool hasErrorEntries() const { return this->errorEntries_ != nullptr;};
    void deleteErrorEntries() { this->errorEntries_ = nullptr;};
    inline const vector<Models::DeleteTargetsResponseBodyDataErrorEntries> & errorEntries() const { DARABONBA_PTR_GET_CONST(errorEntries_, vector<Models::DeleteTargetsResponseBodyDataErrorEntries>) };
    inline vector<Models::DeleteTargetsResponseBodyDataErrorEntries> errorEntries() { DARABONBA_PTR_GET(errorEntries_, vector<Models::DeleteTargetsResponseBodyDataErrorEntries>) };
    inline DeleteTargetsResponseBodyData& setErrorEntries(const vector<Models::DeleteTargetsResponseBodyDataErrorEntries> & errorEntries) { DARABONBA_PTR_SET_VALUE(errorEntries_, errorEntries) };
    inline DeleteTargetsResponseBodyData& setErrorEntries(vector<Models::DeleteTargetsResponseBodyDataErrorEntries> && errorEntries) { DARABONBA_PTR_SET_RVALUE(errorEntries_, errorEntries) };


    // errorEntriesCount Field Functions 
    bool hasErrorEntriesCount() const { return this->errorEntriesCount_ != nullptr;};
    void deleteErrorEntriesCount() { this->errorEntriesCount_ = nullptr;};
    inline int32_t errorEntriesCount() const { DARABONBA_PTR_GET_DEFAULT(errorEntriesCount_, 0) };
    inline DeleteTargetsResponseBodyData& setErrorEntriesCount(int32_t errorEntriesCount) { DARABONBA_PTR_SET_VALUE(errorEntriesCount_, errorEntriesCount) };


  protected:
    // The information about the event body that failed to be processed.
    std::shared_ptr<vector<Models::DeleteTargetsResponseBodyDataErrorEntries>> errorEntries_ = nullptr;
    // The number of event bodies that failed to be processed. Valid values: 0: No event bodies failed to be processed. An integer other than 0: the number of event bodies that failed to be processed.
    std::shared_ptr<int32_t> errorEntriesCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
