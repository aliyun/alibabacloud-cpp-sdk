// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTADVANCEREQUESTGRAPHSEARCHARGS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTADVANCEREQUESTGRAPHSEARCHARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentAdvanceRequestGraphSearchArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentAdvanceRequestGraphSearchArgs& obj) { 
      DARABONBA_PTR_TO_JSON(GraphTopK, graphTopK_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentAdvanceRequestGraphSearchArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(GraphTopK, graphTopK_);
    };
    QueryContentAdvanceRequestGraphSearchArgs() = default ;
    QueryContentAdvanceRequestGraphSearchArgs(const QueryContentAdvanceRequestGraphSearchArgs &) = default ;
    QueryContentAdvanceRequestGraphSearchArgs(QueryContentAdvanceRequestGraphSearchArgs &&) = default ;
    QueryContentAdvanceRequestGraphSearchArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentAdvanceRequestGraphSearchArgs() = default ;
    QueryContentAdvanceRequestGraphSearchArgs& operator=(const QueryContentAdvanceRequestGraphSearchArgs &) = default ;
    QueryContentAdvanceRequestGraphSearchArgs& operator=(QueryContentAdvanceRequestGraphSearchArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->graphTopK_ != nullptr; };
    // graphTopK Field Functions 
    bool hasGraphTopK() const { return this->graphTopK_ != nullptr;};
    void deleteGraphTopK() { this->graphTopK_ = nullptr;};
    inline int32_t graphTopK() const { DARABONBA_PTR_GET_DEFAULT(graphTopK_, 0) };
    inline QueryContentAdvanceRequestGraphSearchArgs& setGraphTopK(int32_t graphTopK) { DARABONBA_PTR_SET_VALUE(graphTopK_, graphTopK) };


  protected:
    std::shared_ptr<int32_t> graphTopK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
