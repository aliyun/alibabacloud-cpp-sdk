// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPLAYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPLAYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeDisplayConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisplayConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisplayConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
    };
    DescribeDisplayConfigRequest() = default ;
    DescribeDisplayConfigRequest(const DescribeDisplayConfigRequest &) = default ;
    DescribeDisplayConfigRequest(DescribeDisplayConfigRequest &&) = default ;
    DescribeDisplayConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisplayConfigRequest() = default ;
    DescribeDisplayConfigRequest& operator=(const DescribeDisplayConfigRequest &) = default ;
    DescribeDisplayConfigRequest& operator=(DescribeDisplayConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & androidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> androidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline DescribeDisplayConfigRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline DescribeDisplayConfigRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


  protected:
    std::shared_ptr<vector<string>> androidInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
