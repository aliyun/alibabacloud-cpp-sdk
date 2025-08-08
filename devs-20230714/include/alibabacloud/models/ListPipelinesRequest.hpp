// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
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
  class ListPipelinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labelSelector, labelSelector_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labelSelector, labelSelector_);
    };
    ListPipelinesRequest() = default ;
    ListPipelinesRequest(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest(ListPipelinesRequest &&) = default ;
    ListPipelinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesRequest() = default ;
    ListPipelinesRequest& operator=(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest& operator=(ListPipelinesRequest &&) = default ;
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
    inline ListPipelinesRequest& setLabelSelector(const vector<string> & labelSelector) { DARABONBA_PTR_SET_VALUE(labelSelector_, labelSelector) };
    inline ListPipelinesRequest& setLabelSelector(vector<string> && labelSelector) { DARABONBA_PTR_SET_RVALUE(labelSelector_, labelSelector) };


  protected:
    std::shared_ptr<vector<string>> labelSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
