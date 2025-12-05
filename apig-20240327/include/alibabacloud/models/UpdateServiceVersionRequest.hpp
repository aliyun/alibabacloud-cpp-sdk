// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateServiceVersionRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateServiceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labels, labels_);
    };
    UpdateServiceVersionRequest() = default ;
    UpdateServiceVersionRequest(const UpdateServiceVersionRequest &) = default ;
    UpdateServiceVersionRequest(UpdateServiceVersionRequest &&) = default ;
    UpdateServiceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceVersionRequest() = default ;
    UpdateServiceVersionRequest& operator=(const UpdateServiceVersionRequest &) = default ;
    UpdateServiceVersionRequest& operator=(UpdateServiceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<UpdateServiceVersionRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<UpdateServiceVersionRequestLabels>) };
    inline vector<UpdateServiceVersionRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<UpdateServiceVersionRequestLabels>) };
    inline UpdateServiceVersionRequest& setLabels(const vector<UpdateServiceVersionRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateServiceVersionRequest& setLabels(vector<UpdateServiceVersionRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<UpdateServiceVersionRequestLabels>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
