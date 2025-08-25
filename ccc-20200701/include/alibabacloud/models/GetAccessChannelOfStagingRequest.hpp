// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSCHANNELOFSTAGINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSCHANNELOFSTAGINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetAccessChannelOfStagingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessChannelOfStagingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SearchPattern, searchPattern_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessChannelOfStagingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchPattern, searchPattern_);
    };
    GetAccessChannelOfStagingRequest() = default ;
    GetAccessChannelOfStagingRequest(const GetAccessChannelOfStagingRequest &) = default ;
    GetAccessChannelOfStagingRequest(GetAccessChannelOfStagingRequest &&) = default ;
    GetAccessChannelOfStagingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessChannelOfStagingRequest() = default ;
    GetAccessChannelOfStagingRequest& operator=(const GetAccessChannelOfStagingRequest &) = default ;
    GetAccessChannelOfStagingRequest& operator=(GetAccessChannelOfStagingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->searchPattern_ != nullptr; };
    // searchPattern Field Functions 
    bool hasSearchPattern() const { return this->searchPattern_ != nullptr;};
    void deleteSearchPattern() { this->searchPattern_ = nullptr;};
    inline string searchPattern() const { DARABONBA_PTR_GET_DEFAULT(searchPattern_, "") };
    inline GetAccessChannelOfStagingRequest& setSearchPattern(string searchPattern) { DARABONBA_PTR_SET_VALUE(searchPattern_, searchPattern) };


  protected:
    std::shared_ptr<string> searchPattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
