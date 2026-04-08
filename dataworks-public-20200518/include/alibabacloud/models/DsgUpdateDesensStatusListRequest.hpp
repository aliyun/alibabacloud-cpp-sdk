// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUPDATEDESENSSTATUSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGUPDATEDESENSSTATUSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUpdateDesensStatusListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUpdateDesensStatusListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesensStatus, desensStatus_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUpdateDesensStatusListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensStatus, desensStatus_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DsgUpdateDesensStatusListRequest() = default ;
    DsgUpdateDesensStatusListRequest(const DsgUpdateDesensStatusListRequest &) = default ;
    DsgUpdateDesensStatusListRequest(DsgUpdateDesensStatusListRequest &&) = default ;
    DsgUpdateDesensStatusListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUpdateDesensStatusListRequest() = default ;
    DsgUpdateDesensStatusListRequest& operator=(const DsgUpdateDesensStatusListRequest &) = default ;
    DsgUpdateDesensStatusListRequest& operator=(DsgUpdateDesensStatusListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desensStatus_ == nullptr
        && this->ids_ == nullptr; };
    // desensStatus Field Functions 
    bool hasDesensStatus() const { return this->desensStatus_ != nullptr;};
    void deleteDesensStatus() { this->desensStatus_ = nullptr;};
    inline int32_t getDesensStatus() const { DARABONBA_PTR_GET_DEFAULT(desensStatus_, 0) };
    inline DsgUpdateDesensStatusListRequest& setDesensStatus(int32_t desensStatus) { DARABONBA_PTR_SET_VALUE(desensStatus_, desensStatus) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int32_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int32_t>) };
    inline vector<int32_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int32_t>) };
    inline DsgUpdateDesensStatusListRequest& setIds(const vector<int32_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DsgUpdateDesensStatusListRequest& setIds(vector<int32_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> desensStatus_ {};
    // This parameter is required.
    shared_ptr<vector<int32_t>> ids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
