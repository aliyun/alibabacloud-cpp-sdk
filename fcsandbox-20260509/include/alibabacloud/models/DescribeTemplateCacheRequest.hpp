// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class DescribeTemplateCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
    };
    DescribeTemplateCacheRequest() = default ;
    DescribeTemplateCacheRequest(const DescribeTemplateCacheRequest &) = default ;
    DescribeTemplateCacheRequest(DescribeTemplateCacheRequest &&) = default ;
    DescribeTemplateCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateCacheRequest() = default ;
    DescribeTemplateCacheRequest& operator=(const DescribeTemplateCacheRequest &) = default ;
    DescribeTemplateCacheRequest& operator=(DescribeTemplateCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->teamID_ == nullptr; };
    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline DescribeTemplateCacheRequest& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    // The team ID.
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
