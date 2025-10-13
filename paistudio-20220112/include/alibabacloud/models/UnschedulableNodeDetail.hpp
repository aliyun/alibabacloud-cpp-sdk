// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNSCHEDULABLENODEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_UNSCHEDULABLENODEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UnschedulableNodeDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnschedulableNodeDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, UnschedulableNodeDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    UnschedulableNodeDetail() = default ;
    UnschedulableNodeDetail(const UnschedulableNodeDetail &) = default ;
    UnschedulableNodeDetail(UnschedulableNodeDetail &&) = default ;
    UnschedulableNodeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnschedulableNodeDetail() = default ;
    UnschedulableNodeDetail& operator=(const UnschedulableNodeDetail &) = default ;
    UnschedulableNodeDetail& operator=(UnschedulableNodeDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodes_ == nullptr
        && return this->reason_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline UnschedulableNodeDetail& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline UnschedulableNodeDetail& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UnschedulableNodeDetail& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<vector<string>> nodes_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
