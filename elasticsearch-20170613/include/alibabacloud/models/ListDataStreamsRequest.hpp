// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASTREAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASTREAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataStreamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataStreamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isManaged, isManaged_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataStreamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isManaged, isManaged_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListDataStreamsRequest() = default ;
    ListDataStreamsRequest(const ListDataStreamsRequest &) = default ;
    ListDataStreamsRequest(ListDataStreamsRequest &&) = default ;
    ListDataStreamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataStreamsRequest() = default ;
    ListDataStreamsRequest& operator=(const ListDataStreamsRequest &) = default ;
    ListDataStreamsRequest& operator=(ListDataStreamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isManaged_ == nullptr
        && this->name_ == nullptr; };
    // isManaged Field Functions 
    bool hasIsManaged() const { return this->isManaged_ != nullptr;};
    void deleteIsManaged() { this->isManaged_ = nullptr;};
    inline bool getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
    inline ListDataStreamsRequest& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataStreamsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<bool> isManaged_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
