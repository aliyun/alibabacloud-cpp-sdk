// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTTARGETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PUTTARGETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutTargetsResponseBodyDataErrorEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class PutTargetsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutTargetsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorEntries, errorEntries_);
      DARABONBA_PTR_TO_JSON(ErrorEntriesCount, errorEntriesCount_);
    };
    friend void from_json(const Darabonba::Json& j, PutTargetsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorEntries, errorEntries_);
      DARABONBA_PTR_FROM_JSON(ErrorEntriesCount, errorEntriesCount_);
    };
    PutTargetsResponseBodyData() = default ;
    PutTargetsResponseBodyData(const PutTargetsResponseBodyData &) = default ;
    PutTargetsResponseBodyData(PutTargetsResponseBodyData &&) = default ;
    PutTargetsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutTargetsResponseBodyData() = default ;
    PutTargetsResponseBodyData& operator=(const PutTargetsResponseBodyData &) = default ;
    PutTargetsResponseBodyData& operator=(PutTargetsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorEntries_ != nullptr
        && this->errorEntriesCount_ != nullptr; };
    // errorEntries Field Functions 
    bool hasErrorEntries() const { return this->errorEntries_ != nullptr;};
    void deleteErrorEntries() { this->errorEntries_ = nullptr;};
    inline const vector<Models::PutTargetsResponseBodyDataErrorEntries> & errorEntries() const { DARABONBA_PTR_GET_CONST(errorEntries_, vector<Models::PutTargetsResponseBodyDataErrorEntries>) };
    inline vector<Models::PutTargetsResponseBodyDataErrorEntries> errorEntries() { DARABONBA_PTR_GET(errorEntries_, vector<Models::PutTargetsResponseBodyDataErrorEntries>) };
    inline PutTargetsResponseBodyData& setErrorEntries(const vector<Models::PutTargetsResponseBodyDataErrorEntries> & errorEntries) { DARABONBA_PTR_SET_VALUE(errorEntries_, errorEntries) };
    inline PutTargetsResponseBodyData& setErrorEntries(vector<Models::PutTargetsResponseBodyDataErrorEntries> && errorEntries) { DARABONBA_PTR_SET_RVALUE(errorEntries_, errorEntries) };


    // errorEntriesCount Field Functions 
    bool hasErrorEntriesCount() const { return this->errorEntriesCount_ != nullptr;};
    void deleteErrorEntriesCount() { this->errorEntriesCount_ = nullptr;};
    inline int32_t errorEntriesCount() const { DARABONBA_PTR_GET_DEFAULT(errorEntriesCount_, 0) };
    inline PutTargetsResponseBodyData& setErrorEntriesCount(int32_t errorEntriesCount) { DARABONBA_PTR_SET_VALUE(errorEntriesCount_, errorEntriesCount) };


  protected:
    // The ID of the failed event target.
    std::shared_ptr<vector<Models::PutTargetsResponseBodyDataErrorEntries>> errorEntries_ = nullptr;
    // The number of failed event targets. Valid values:
    // 
    // *   0: All event targets succeeded.
    // *   An integer other than 0: indicates the number of failed event targets.
    std::shared_ptr<int32_t> errorEntriesCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
