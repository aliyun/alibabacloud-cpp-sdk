// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCCLUSTERTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCCLUSTERTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDocClusterTaskResponseBodyDataTopics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDocClusterTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocClusterTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocClusterTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
    };
    GetDocClusterTaskResponseBodyData() = default ;
    GetDocClusterTaskResponseBodyData(const GetDocClusterTaskResponseBodyData &) = default ;
    GetDocClusterTaskResponseBodyData(GetDocClusterTaskResponseBodyData &&) = default ;
    GetDocClusterTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocClusterTaskResponseBodyData() = default ;
    GetDocClusterTaskResponseBodyData& operator=(const GetDocClusterTaskResponseBodyData &) = default ;
    GetDocClusterTaskResponseBodyData& operator=(GetDocClusterTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->status_ != nullptr && this->topics_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDocClusterTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDocClusterTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<Models::GetDocClusterTaskResponseBodyDataTopics> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<Models::GetDocClusterTaskResponseBodyDataTopics>) };
    inline vector<Models::GetDocClusterTaskResponseBodyDataTopics> topics() { DARABONBA_PTR_GET(topics_, vector<Models::GetDocClusterTaskResponseBodyDataTopics>) };
    inline GetDocClusterTaskResponseBodyData& setTopics(const vector<Models::GetDocClusterTaskResponseBodyDataTopics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline GetDocClusterTaskResponseBodyData& setTopics(vector<Models::GetDocClusterTaskResponseBodyDataTopics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::GetDocClusterTaskResponseBodyDataTopics>> topics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
