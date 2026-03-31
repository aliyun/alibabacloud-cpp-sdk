// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEADVANCEDSEARCHFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEADVANCEDSEARCHFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateAdvancedSearchFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateAdvancedSearchFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateAdvancedSearchFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
    };
    GetAggregateAdvancedSearchFileRequest() = default ;
    GetAggregateAdvancedSearchFileRequest(const GetAggregateAdvancedSearchFileRequest &) = default ;
    GetAggregateAdvancedSearchFileRequest(GetAggregateAdvancedSearchFileRequest &&) = default ;
    GetAggregateAdvancedSearchFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateAdvancedSearchFileRequest() = default ;
    GetAggregateAdvancedSearchFileRequest& operator=(const GetAggregateAdvancedSearchFileRequest &) = default ;
    GetAggregateAdvancedSearchFileRequest& operator=(GetAggregateAdvancedSearchFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateAdvancedSearchFileRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
