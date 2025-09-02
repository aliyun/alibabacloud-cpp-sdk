// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEERRORRANKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEERRORRANKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceErrorRankRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceErrorRankRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceErrorRankRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetInstanceErrorRankRequest() = default ;
    GetInstanceErrorRankRequest(const GetInstanceErrorRankRequest &) = default ;
    GetInstanceErrorRankRequest(GetInstanceErrorRankRequest &&) = default ;
    GetInstanceErrorRankRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceErrorRankRequest() = default ;
    GetInstanceErrorRankRequest& operator=(const GetInstanceErrorRankRequest &) = default ;
    GetInstanceErrorRankRequest& operator=(GetInstanceErrorRankRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetInstanceErrorRankRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
