// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ListTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labelSelector, labelSelector_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labelSelector, labelSelector_);
    };
    ListTasksRequest() = default ;
    ListTasksRequest(const ListTasksRequest &) = default ;
    ListTasksRequest(ListTasksRequest &&) = default ;
    ListTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksRequest() = default ;
    ListTasksRequest& operator=(const ListTasksRequest &) = default ;
    ListTasksRequest& operator=(ListTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelSelector_ != nullptr; };
    // labelSelector Field Functions 
    bool hasLabelSelector() const { return this->labelSelector_ != nullptr;};
    void deleteLabelSelector() { this->labelSelector_ = nullptr;};
    inline const vector<string> & labelSelector() const { DARABONBA_PTR_GET_CONST(labelSelector_, vector<string>) };
    inline vector<string> labelSelector() { DARABONBA_PTR_GET(labelSelector_, vector<string>) };
    inline ListTasksRequest& setLabelSelector(const vector<string> & labelSelector) { DARABONBA_PTR_SET_VALUE(labelSelector_, labelSelector) };
    inline ListTasksRequest& setLabelSelector(vector<string> && labelSelector) { DARABONBA_PTR_SET_RVALUE(labelSelector_, labelSelector) };


  protected:
    std::shared_ptr<vector<string>> labelSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
