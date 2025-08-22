// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentsResponseBodyDataEnvironments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Environments, environments_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Environments, environments_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEnvironmentsResponseBodyData() = default ;
    ListEnvironmentsResponseBodyData(const ListEnvironmentsResponseBodyData &) = default ;
    ListEnvironmentsResponseBodyData(ListEnvironmentsResponseBodyData &&) = default ;
    ListEnvironmentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentsResponseBodyData() = default ;
    ListEnvironmentsResponseBodyData& operator=(const ListEnvironmentsResponseBodyData &) = default ;
    ListEnvironmentsResponseBodyData& operator=(ListEnvironmentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environments_ != nullptr
        && this->total_ != nullptr; };
    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<Models::ListEnvironmentsResponseBodyDataEnvironments> & environments() const { DARABONBA_PTR_GET_CONST(environments_, vector<Models::ListEnvironmentsResponseBodyDataEnvironments>) };
    inline vector<Models::ListEnvironmentsResponseBodyDataEnvironments> environments() { DARABONBA_PTR_GET(environments_, vector<Models::ListEnvironmentsResponseBodyDataEnvironments>) };
    inline ListEnvironmentsResponseBodyData& setEnvironments(const vector<Models::ListEnvironmentsResponseBodyDataEnvironments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline ListEnvironmentsResponseBodyData& setEnvironments(vector<Models::ListEnvironmentsResponseBodyDataEnvironments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListEnvironmentsResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried environments.
    std::shared_ptr<vector<Models::ListEnvironmentsResponseBodyDataEnvironments>> environments_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
