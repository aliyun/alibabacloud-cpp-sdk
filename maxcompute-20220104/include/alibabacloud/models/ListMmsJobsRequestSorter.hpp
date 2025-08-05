// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSJOBSREQUESTSORTER_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSJOBSREQUESTSORTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsJobsRequestSorter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsJobsRequestSorter& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsJobsRequestSorter& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListMmsJobsRequestSorter() = default ;
    ListMmsJobsRequestSorter(const ListMmsJobsRequestSorter &) = default ;
    ListMmsJobsRequestSorter(ListMmsJobsRequestSorter &&) = default ;
    ListMmsJobsRequestSorter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsJobsRequestSorter() = default ;
    ListMmsJobsRequestSorter& operator=(const ListMmsJobsRequestSorter &) = default ;
    ListMmsJobsRequestSorter& operator=(ListMmsJobsRequestSorter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsJobsRequestSorter& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
