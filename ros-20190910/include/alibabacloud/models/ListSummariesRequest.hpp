// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
    };
    ListSummariesRequest() = default ;
    ListSummariesRequest(const ListSummariesRequest &) = default ;
    ListSummariesRequest(ListSummariesRequest &&) = default ;
    ListSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummariesRequest() = default ;
    ListSummariesRequest& operator=(const ListSummariesRequest &) = default ;
    ListSummariesRequest& operator=(ListSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->option_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline ListSummariesRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


  protected:
    std::shared_ptr<string> option_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
